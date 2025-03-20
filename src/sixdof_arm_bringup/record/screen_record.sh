#!/bin/bash

OUTPUT_DIR="$HOME/Videos/teste_treinamento"
mkdir -p "$OUTPUT_DIR"

while true; do
    TIMESTAMP=$(date +"%Y-%m-%d_%H-%M-%S")
    OUTPUT_FILE="$OUTPUT_DIR/gravacao_$TIMESTAMP.mp4"
    
    echo "Iniciando gravação: $OUTPUT_FILE"
    
    # Gravação da tela por 10 minutos (600 segundos)
    ffmpeg -y -video_size 1920x1080 -framerate 30 -f x11grab -i :0.0 -t 120 "$OUTPUT_FILE"

    echo "Gravação salva: $OUTPUT_FILE"

    # Aguarda 50 minutos antes da próxima gravação
    sleep 3480
done
