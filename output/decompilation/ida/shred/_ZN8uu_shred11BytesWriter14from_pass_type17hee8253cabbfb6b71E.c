// positive sp value has been detected, the output may be wrong!
void *__fastcall uu_shred::BytesWriter::from_pass_type(char *a1, _BYTE *a2)
{
  char v3; // bp
  void *result; // rax
  unsigned __int8 *v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r15
  __int64 v8; // rdi
  _QWORD v9[3]; // [rsp-1F000h] [rbp-20060h] BYREF
  unsigned __int64 v10; // [rsp-1EFE8h] [rbp-20048h]
  unsigned __int64 v11; // [rsp-1EFE0h] [rbp-20040h]
  _BYTE v12[4]; // [rsp-1EFD4h] [rbp-20034h] BYREF
  __int64 v13; // [rsp-1EFD0h] [rbp-20030h] BYREF
  __int64 v14; // [rsp-1DFD0h] [rbp-1F030h] BYREF
  _BYTE v15[61394]; // [rsp-EFD2h] [rbp-10032h] BYREF

  do
    v13 = 0LL;
  while ( &v13 != (__int64 *)((char *)&v14 - (char *)&unk_20000) );
  if ( *a2 == 2 )
  {
    rand_core::SeedableRng::from_os_rng(a1 + 16);
    v3 = 0;
    result = memset(a1 + 336, 0, (size_t)&unk_10000);
  }
  else
  {
    v5 = a2 + 1;
    if ( (*a2 & 1) != 0 )
    {
      memset(v15, 0, (size_t)&unk_10002);
      ((void (__fastcall *)(_QWORD *, _BYTE *, void *, __int64))core::slice::<impl [T]>::chunks_exact_mut)(
        v9,
        v15,
        &unk_10002,
        3LL);
      v6 = v10;
      v7 = v11;
      if ( v10 >= v11 )
      {
        v8 = v9[2];
        do
        {
          v6 -= v7;
          ((void (__fastcall *)(__int64, unsigned __int64, unsigned __int8 *, __int64, char **))core::slice::<impl [T]>::copy_from_slice)(
            v8,
            v7,
            v5,
            3LL,
            &off_F9F68);
          v8 += v7;
        }
        while ( v6 >= v7 );
      }
      memcpy(v12, v15, (size_t)&unk_10002);
    }
    else
    {
      memset(v12, *v5, (size_t)&unk_10002);
    }
    *(__int64 *)((char *)&GCC_except_table4_0 + (_QWORD)a1) = 0LL;
    result = memcpy(a1 + 1, v12, (size_t)&unk_10002);
    v3 = 1;
  }
  *a1 = v3;
  return result;
}