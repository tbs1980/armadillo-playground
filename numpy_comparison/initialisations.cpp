#include <iostream>
#include <armadillo>

int main()
{
	arma::mat mat1 = {
        {1., 2., 3.,},
        {4., 5., 6.}
    };
	mat1.print();

	std::cout << "zero" << std::endl;
	arma::mat mat2(3, 2, arma::fill::zeros);
	mat2.print();
	arma::mat mat3(3, 2);
	mat3.zeros();
	mat3.print();
}