import numpy as np
import matplotlib.pyplot as plt
from matplotlib import cm
from mpl_toolkits.mplot3d import Axes3D

# Create data
data = np.random.uniform(low=-0.01, high=0.01, size=(8, 60, 5))

# Create boolean mask for which voxels to show (e.g., all True)
filled = np.ones(data.shape, dtype=bool)

# Normalize data to [0, 1] for colormap
norm = (data - data.min()) / (data.max() - data.min())

# Choose colormap
cmap = cm.viridis

# Get colors from colormap
colors = cmap(norm)

# Optionally set alpha (transparency)
colors[..., 3] = 0.9

# Plot
fig = plt.figure(figsize=(10, 6))
ax = fig.add_subplot(111, projection='3d')

ax.voxels(filled, facecolors=colors, edgecolor='k')

ax.set_xlabel("Número de Juntas")
ax.set_ylabel("Número de estados")
ax.set_zlabel("Número de ações")
ax.set_title("Action Values")

plt.show()
