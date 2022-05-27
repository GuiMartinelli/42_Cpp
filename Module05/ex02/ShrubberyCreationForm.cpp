/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guferrei <guferrei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 19:55:41 by guferrei          #+#    #+#             */
/*   Updated: 2022/05/25 21:50:24 by guferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberryCreationForm::ShrubberryCreationForm() : AForm("ShrubberryCreationForm", 145, 137) {
	this->_target = "Nobody";
}

ShrubberryCreationForm::ShrubberryCreationForm(std::string target) : AForm("ShrubberryCreationForm", 145, 137) {
	this->_target = target;
}

ShrubberryCreationForm::ShrubberryCreationForm(ShrubberryCreationForm const & obj) : AForm(obj.getName(), obj.getGradeSign(), obj.getGradeExe()) {
	*this = obj;
}

ShrubberryCreationForm::~ShrubberryCreationForm() {
}

ShrubberryCreationForm &	ShrubberryCreationForm::operator=(ShrubberryCreationForm const & obj) {
	if (this != &obj) {
		this->setSign(obj.getIsSigned());
		this->_target = obj.getTarget();
	}
	return *this;
}

std::string	ShrubberryCreationForm::getTarget() const {
	return this->_target;
}


void	ShrubberryCreationForm::beSigned(Bureaucrat const & bur) {
	if (bur.getGrade() > this->getGradeSign())
		throw GradeTooLowException();
	else
		this->setSign(true);
}

void	ShrubberryCreationForm::execute(Bureaucrat const & executor) const {
	if (executor.getGrade() > this->getGradeExe())
		throw GradeTooLowException();
	else {
		std::string file = this->_target + "_shrubbery.txt";
		std::ofstream	ofs(file.c_str());
		ofs << "              _{\\ _{\\{\\/}/}/}__\n";
		ofs << "             {/{/\\}{/{/\\}(\\}{/\\} _\n";
		ofs << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n";
		ofs << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n";
		ofs << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n";
		ofs << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n";
		ofs << "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n";
		ofs << "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n";
		ofs << "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n";
		ofs << "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n";
		ofs << "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n";
		ofs << "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n";
		ofs << "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n";
		ofs << "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n";
		ofs << "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n";
		ofs << "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n";
		ofs << "             {/{\\{\\{\\/}/}{\\{\\}/}\n";
		ofs << "              {){/ {\\/}{\\/} \\}\\}\n";
		ofs << "              (_)  \\.-'.-/\n";
		ofs << "          __...--- |'-.-'| --...__\n";
		ofs << "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n";
		ofs << " -\"    ' .  . '    |.'-._| '  . .  ' \n";
		ofs << " .  '-  '    .--'  | '-.'|    .  '  . '\n";
		ofs << "          ' ..     |'-_.-|\n";
		ofs << "  .  '  .       _.-|-._ -|-._  .  '  .\n";
		ofs << "              .'   |'- .-|   '.\n";
		ofs << "  ..-'   ' .  '.   `-._.-;   .'  '  - .\n";
		ofs << "   .-' '        '-._______.-'     '  .\n";
		ofs << "        .      ~,\n";
		ofs.close();
	}
}
