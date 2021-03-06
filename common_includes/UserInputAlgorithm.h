/**
 * @file UserInputAlgorithm.h
 * @brief declarations of the functions for UserInputAlgorithm.c
 * @author Marcel Gruessinger
 * @date 27.12.2016
 */

#pragma warning(disable:4996)

void waitForUserInputInOneByOne(bool* const pbAlgorithmRunning, bool* const pbExitPressed);
void waitForUserInputInContinuous(bool* const pbAlgorithmRunning, bool* const pbExitPressed);