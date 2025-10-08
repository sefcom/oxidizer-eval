long long uu_hashsum::uu_app(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    if ((char)a1.equal(a2, "md5sumsha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcr", 6) || (char)a1.equal(a2, "sha1sumsha224sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a", 7) || (char)a1.equal(a2, "sha224sumsha256sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style ch", 9) || (char)a1.equal(a2, "sha256sumsha384sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in t", 9) || (char)a1.equal(a2, "sha384sumsha512sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (defau", 9) || (char)a1.equal(a2, "sha512sumb2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't p", 9))
    {
LABEL_483694:
        uu_hashsum::uu_app_common(a0);
    }
    else if ((char)a1.equal(a2, "b2sumb3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK f", 5))
    {
        uu_hashsum::uu_app_length(a0);
    }
    else
    {
        if ((char)a1.equal(a2, "sha3-224sumsha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) || (char)a1.equal(a2, "sha3-256sumsha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) || (char)a1.equal(a2, "sha3-384sumsha3-512sumsha3sumshake128sumshake256sum", 11) || (char)a1.equal(a2, "sha3-512sumsha3sumshake128sumshake256sum", 11))
            goto LABEL_483694;
        if ((char)a1.equal(a2, "sha3sumshake128sumshake256sum", 7) || (char)a1.equal(a2, "shake128sumshake256sum", 11) || (char)a1.equal(a2, "shake256sum", 11))
        {
            uu_hashsum::uu_app_bits(a0);
        }
        else if ((char)a1.equal(a2, "b3sum(uutils coreutils) 0.0.30Compute and check message digests.{} --<digest> [OPTIONS]... [FILE]...binaryread in binary modecheckread hashsums from the FILEs and check themtagcreate a BSD-style checksumread in text mode (default)quietdon't print OK for ea", 5))
        {
            uu_hashsum::uu_app_b3sum(a0);
        }
        else
        {
            uu_hashsum::uu_app_custom(a0);
            a0->field_2c8 = 1;
            return a0;
        }
    }
    a0->field_2c8 = 0;
    return a0;
}
