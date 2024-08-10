#!/bin/bash

# Variables for the user and group names
USER_NAME=$1
GROUP_NAME=$2

# Check if the group already exists
if getent group "$GROUP_NAME" >/dev/null; then
    echo "Group '$GROUP_NAME' already exists."
else
    # Create the group if it doesn't exist
    sudo groupadd "$GROUP_NAME"
    echo "Group '$GROUP_NAME' has been created."
fi

# Check if the user already exists
if id "$USER_NAME" >/dev/null 2>&1; then
    echo "User '$USER_NAME' already exists."
else
    # Create the user and add them to the group
    sudo useradd -m -g "$GROUP_NAME" "$USER_NAME"
    echo "User '$USER_NAME' has been created and added to the '$GROUP_NAME' group."
fi

# Display information about the user and group
echo
echo "User Information:"
id "$USER_NAME"

echo
echo "Group Information:"
getent group "$GROUP_NAME"
