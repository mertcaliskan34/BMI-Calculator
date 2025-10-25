# Body Mass Index (BMI) Calculation and Evaluation Utility (C Implementation)

## Project Overview
This application is a console-based utility, implemented in standard C, designed to accurately calculate the Body Mass Index (BMI) of an individual. It processes user-supplied anthropometric data (weight and height) and furnishes a categorized health status evaluation based on established international BMI classification standards.

## Technical Specifications
*   **Language:** C (Standard C Library)
*   **Source File:** `main.c` (or equivalent containing the provided code)
*   **Dependencies:** Standard C Compiler (e.g., GCC, Clang)

## Calculation Methodology
The program computes the Body Mass Index using the standard formula:

$$
\text{BMI} = \frac{\text{Weight (kg)}}{\text{Height (m)}^2}
$$

The user is prompted to input their weight in **kilograms (kg)** and their height in **meters (m)**.

## Execution and Usage

1.  **Compilation:** Compile the source code using a C compiler:
    ```bash
    gcc your_filename.c -o bmi_calc
    ```

2.  **Execution:** Run the compiled executable:
    ```bash
    ./bmi_calc
    ```

3.  **Input:** Follow the on-screen prompts to input the required numerical values:
    *   Enter your weight in kilograms.
    *   Enter your height in meters.

4.  **Output:** The program will display the calculated BMI value and the corresponding health evaluation.

## BMI Classification Matrix
The evaluation logic is based on the following standard conditional ranges:

| BMI Range | Evaluation Category | Recommendation |
| :--- | :--- | :--- |
| $\text{BMI} < 18.5$ | Underweight | Requires dietary improvement. |
| $18.5 \le \text{BMI} < 25$ | Normal Weight | Optimal weight status. |
| $25 \le \text{BMI} < 30$ | Pre-obese (Overweight) | Attention to diet and lifestyle modification is advised. |
| $30 \le \text{BMI} < 40$ | Obese (Class I & II) | Dieting is strongly recommended. |
| $\text{BMI} \ge 40$ | Severely Obese (Class III) | Consultation with a certified dietitian or physician is mandatory. |

---
*Note: This program is for informational purposes only and does not constitute professional medical advice.*
