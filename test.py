import random
import struct


def is_prime(n):
    """Basic primality test for 8-digit numbers."""
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    p = 3
    while p * p <= n:
        if n % p == 0:
            return False
        p += 2
    return True


def fnv1a_32(data: bytes) -> int:
    """Calculates FNV-1a 32-bit hash."""
    hval = 0x811C9DC5
    fnv_prime = 0x01000193
    uint32_max = 2**32

    for byte in data:
        hval = hval ^ byte
        hval = (hval * fnv_prime) % uint32_max
    return hval


def generate_valid_key():
    print("Searching for valid configuration...")

    while True:
        # 1. Generate 5 random 8-digit primes
        # Range 10000000 to 99999999 ensures no leading zeros
        primes = []
        while len(primes) < 5:
            cand = random.randint(10000000, 99999999)
            if is_prime(cand):
                primes.append(str(cand))

        # 2. Concatenate them to form the data for hashing
        # The C code iterates the pointers of the strings, effectively
        # hashing the ASCII bytes of the numbers in sequence.
        data_string = "".join(primes)
        data_bytes = data_string.encode("ascii")

        # 3. Calculate Checksum
        full_hash = fnv1a_32(data_bytes)
        checksum = full_hash % 100_000_000

        # 4. Validate Checksum Format
        # The checksum must also be 8 digits and cannot start with '0'
        # (i.e., must be >= 10,000,000)
        if checksum >= 10_000_000:
            primes.append(str(checksum))
            # Assuming '-' is the separator based on standard key formats
            # (The separator char is handled by the split function not shown)
            key = "-".join(primes)
            return key


if __name__ == "__main__":
    flag = generate_valid_key()
    print(f"\nVALID KEY FOUND:\n{flag}")
