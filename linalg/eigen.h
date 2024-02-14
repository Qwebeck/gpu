#pragma once
#include "vector.h"
#include "matrix.h"

struct eigen
{
    int n;
    struct vector *eigenvalues;
    struct matrix *eigenvectors;
};

struct eigen *eigen_new();
void eigen_free(struct eigen *e);

struct eigen *eigen_solve(struct matrix *M, float tol, int max_iter);
struct vector *eigen_solve_eigenvalues(struct matrix *M, float tol, int max_iter);
struct matrix *eigen_solve_eigenvectors(
    struct matrix *M, struct vector *eigenvectors, float tol, int max_iter);
struct vector *eigen_backsolve(
    struct matrix *M, float eigenvalue, float tol, int max_iter);
