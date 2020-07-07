import time
import os


class DelayedClient:
    def __init__(self, client, delay):
        self.client = client
        self.delay = delay
    def get(self, *args, **kwargs):
        time.sleep(self.delay))
        self.client.get(*args, **kwargs)
    def set(self, *args, **kwargs):
        time.sleep(self.delay))
        self.client.set(*args, **kwargs)

def attach_chaos(cache_client):
    """ creates a wrapper class that delays calls to get and set methods """
    if os.environ.get("ENABLE_CHAOS"):
        return ChaosClient(cache_client, float(os.environ.get("CHAOS_DELAY_SECONDS", 0.1))
    return cache_client
