const seats = Array(9).fill('available'); // 9 assentos
const reservations = Array(9).fill(null); // Armazenar reservas
const busElement = document.getElementById('seats'); // Referência aos assentos
const reservationForm = document.getElementById('reservation-form');
const form = document.getElementById('form');
let selectedSeatIndex = null;

// Função para renderizar os assentos
function renderSeats() {
    busElement.innerHTML = '';
    seats.forEach((status, index) => {
        const seat = document.createElement('div');
        seat.classList.add('seat', status);
        seat.innerText = index + 1;

        seat.addEventListener('click', () => selectSeat(index));

        busElement.appendChild(seat);
    });
}

// Função para selecionar ou desistir de um assento
function selectSeat(index) {
    if (seats[index] === 'available') {
        if (selectedSeatIndex !== null) {
            // Desmarcar o assento previamente selecionado
            seats[selectedSeatIndex] = 'available';
        }
        selectedSeatIndex = index;
        seats[selectedSeatIndex] = 'selected';
        renderSeats();
        reservationForm.style.display = 'block';
    } else if (seats[index] === 'selected') {
        seats[index] = 'available';
        selectedSeatIndex = null;
        renderSeats();
        reservationForm.style.display = 'none'; // Esconder o formulário
    }
}

// Lógica para o envio do formulário
form.addEventListener('submit', (event) => {
    event.preventDefault();
    const name = document.getElementById('name').value;
    const cpf = document.getElementById('cpf').value;
    const phone = document.getElementById('phone').value;
    const email = document.getElementById('email').value;

    if (selectedSeatIndex !== null) {
        seats[selectedSeatIndex] = 'reserved';
        reservations[selectedSeatIndex] = { name, cpf, phone, email };
        alert(`Assento ${selectedSeatIndex + 1} reservado para ${name}.`);
        renderSeats();
        reservationForm.style.display = 'none';
        form.reset();
        selectedSeatIndex = null; // Resetar o índice do assento selecionado
    }
});

// Função para formatar o CPF
function formatCPF(cpfField) {
    let cpf = cpfField.value.replace(/\D/g, ''); // Remove caracteres não numéricos
    cpf = cpf.replace(/(\d{3})(\d)/, '$1.$2'); // Adiciona o primeiro ponto
    cpf = cpf.replace(/(\d{3})(\d)/, '$1.$2'); // Adiciona o segundo ponto
    cpf = cpf.replace(/(\d{3})(\d{1,2})$/, '$1-$2'); // Adiciona o hífen
    cpfField.value = cpf.substring(0, 14); // Limita a 14 caracteres (11 dígitos + 3 pontos + 1 hífen)
}

// Renderiza os assentos ao carregar a página
window.onload = renderSeats;
