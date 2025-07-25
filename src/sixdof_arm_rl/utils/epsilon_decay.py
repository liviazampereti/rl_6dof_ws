def linear_epsilon_decay(episode, epsilon, episode_rate=50, decay=0.01):
    if episode%episode_rate==0:
        epsilon -=decay
    return epsilon

def exponential_epsilon_decay(episode, epsilon, episode_rate =50, decay =0.955):
    if episode%episode_rate==0:
        epsilon = max(0.01, epsilon * decay)
    return epsilon