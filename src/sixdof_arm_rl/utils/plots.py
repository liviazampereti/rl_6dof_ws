import matplotlib.pyplot as plt
import numpy as np
import os

def save_episode_time_plot(episodes_time_list, data_formatada, save_dpath):
    
    plt.plot(np.arange(0,len(episodes_time_list),1), episodes_time_list)
    plt.title("Tempo de execução por episódio")
    plt.xlabel("Episódio")
    plt.ylabel("Tempo de execução (s)")
    plt.savefig(os.path.join(save_dpath, f"tempo_por_episodio_{data_formatada}.png"))
    plt.close()
    
def save_rewards_plot(episodes_rewards_list, data_formatada, save_dpath, window_size=10):
    plt.figure(figsize=(8, 6))
    
    # Plotando as recompensas originais
    plt.plot(np.arange(len(episodes_rewards_list)), episodes_rewards_list, label="Recompensa por Episódio", alpha=0.5)
    
    # Calculando e plotando a média móvel
    if len(episodes_rewards_list) >= window_size:
        smooth_rewards = np.convolve(episodes_rewards_list, np.ones(window_size)/window_size, mode='valid')
        plt.plot(np.arange(len(smooth_rewards)), smooth_rewards, label=f"Média Móvel ({window_size} episódios)", color="orange")
    
    plt.title("Recompensa por Episódio")
    plt.xlabel("Episódio")
    plt.ylabel("Recompensa")
    plt.legend()
    plt.grid(True)
    
    plt.savefig(os.path.join(save_dpath, f"recompensa_por_episodio_{data_formatada}.png"))
    plt.close()
    
def save_loss_plot(episodes_loss_list, data_formatada, save_dpath, window_size=10):
    plt.figure(figsize=(8, 6))
    
    # Plotando as recompensas originais
    plt.plot(np.arange(len(episodes_loss_list)), episodes_loss_list, label="Recompensa por Episódio", alpha=0.5)
    
    # Calculando e plotando a média móvel
    if len(episodes_loss_list) >= window_size:
        smooth_rewards = np.convolve(episodes_loss_list, np.ones(window_size)/window_size, mode='valid')
        plt.plot(np.arange(len(smooth_rewards)), smooth_rewards, label=f"Média Móvel ({window_size} episódios)", color="orange")
    
    plt.title("Loss por Episódio")
    plt.xlabel("Episódio")
    plt.ylabel("Loss")
    plt.legend()
    plt.grid(True)
    
    plt.savefig(os.path.join(save_dpath, f"loss_por_episodio_{data_formatada}.png"))
    plt.close()
    
def save_log_loss_plot(episodes_loss_list, data_formatada, save_dpath, window_size=10):
    plt.figure(figsize=(8, 6))
    
    # Plotando as recompensas originais
    plt.plot(np.arange(len(episodes_loss_list)), episodes_loss_list, label="Loss por Episódio", alpha=0.5)
    
    # Calculando e plotando a média móvel
    if len(episodes_loss_list) >= window_size:
        smooth_rewards = np.convolve(episodes_loss_list, np.ones(window_size)/window_size, mode='valid')
        plt.plot(np.arange(len(smooth_rewards)), smooth_rewards, label=f"Média Móvel ({window_size} episódios)", color="orange")
    
    plt.yscale("log")
    plt.title("Loss por Episódio")
    plt.xlabel("Episódio")
    plt.ylabel("Loss")
    plt.legend()
    plt.grid(True)
    
    plt.savefig(os.path.join(save_dpath, f"loss_por_episodio_{data_formatada}.png"))
    plt.close()
    
def save_next_state_plot(next_state_list, data_formatada, save_dpath, episode):
    x = list(range(1, len(next_state_list) + 1))  # Índices fixos
    linhas = list(zip(*next_state_list))  # Transpor a matriz para obter as linhas

    # Criando o gráfico
    for i, linha in enumerate(linhas, start=1):
        plt.plot(x, linha, label=f'Link {i:02d}')
    plt.title("Next State")
    plt.xlabel("Episódio")
    plt.ylabel("Estado")
    plt.savefig(os.path.join(save_dpath, f"next_state_{episode}_{data_formatada}.png"))
    plt.close()
    