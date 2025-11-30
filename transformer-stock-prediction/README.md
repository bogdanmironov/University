# Transformer-Based Stock Price Prediction

This project contains a Jupyter Notebook that demonstrates how to use
a Transformer neural network to predict stock prices for companies such as:

- AAPL
- GOOGL
- MSFT
- AMZN

The dataset comes from the Kaggle repository:
/kaggle/input/stock-time-series-20050101-to-20171231/

## Model Architecture

The model uses:

- Multi-head self-attention layers  
- 1D convolution feed-forward blocks  
- GlobalAveragePooling  
- Dense regression head  
- Custom warm-up + cosine learning-rate schedule

Each company is trained independently.

## Output

For each stock, the notebook produces:

- Train/validation loss curves  
- Predicted vs. actual stock price plots  
- RMSE scores  

## Requirements

- TensorFlow / Keras
- NumPy
- Pandas
- Matplotlib
- scikit-learn

