import requests
import json

# Set the URL of the SDN controller's REST API endpoint
controller_url = "http://sdn_controller_ip:port/"

# Set the credentials for the SDN controller's REST API endpoint (if needed)
username = "admin"
password = "password"

# Define the parameters for the firewall rule
firewall_rule = {
    "match": {
        "eth_type": 2048,
        "ip_proto": 17
    },
    "instructions": {
        "apply_actions": [
            {
                "type": "DROP"
            }
        ]
    }
}

# Convert the firewall rule to JSON format
firewall_rule_json = json.dumps(firewall_rule)

# Send a PUT request to the SDN controller's REST API endpoint to update the firewall rule
response = requests.put(
    controller_url + "firewall/rules",
    auth=(username, password),
    headers={"Content-Type": "application/json"},
    data=firewall_rule_json
)

# Print the response from the SDN controller's REST API endpoint
print(response.content)