const botao = document.getElementById('Id_button_question');
const divQuestion = document.getElementById('Id_Div_question');

botao.addEventListener('click', () => {
  divQuestion.classList.toggle('mostrar');
});