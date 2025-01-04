        __int64 a6)
{
  __int128 v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]

  <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, a5, a6);
  dest[24] = v10;
  *((_OWORD *)dest + 11) = v9;
  dest[25] = a2;
  dest[26] = a3;
  memcpy(dest, a4, 0xB0uLL);
  return dest;
}
