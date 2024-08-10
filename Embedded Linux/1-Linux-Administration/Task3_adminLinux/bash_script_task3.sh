#!/bin/bash
if [ -f "$HOME/.bashrc" ]; then
    # Append new environment variables to .bashrc
    echo "export HELLO=\$HOSTNAME" >> "$HOME/.bashrc"
    echo "LOCAL=\$(whoami)" >> "$HOME/.bashrc"
    echo "export LOCAL" >> "$HOME/.bashrc"
    
    # Open a new terminal window
    if command -v gnome-terminal &> /dev/null
    then
        gnome-terminal &
    else
        echo "No known terminal emulator found to open a new terminal window."
    fi
else
    echo ".bashrc file does not exist in the home directory."
fi

#both HELLO and LOCAL environment variables are available in the new terminal session
