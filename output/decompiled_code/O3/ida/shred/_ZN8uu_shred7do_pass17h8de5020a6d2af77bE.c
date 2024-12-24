__int64 __fastcall uu_shred::do_pass(__int64 a1, _BYTE *a2, char a3, unsigned __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rax
  char v11[344]; // [rsp-F158h] [rbp-10188h] BYREF
  __int64 v12; // [rsp-F000h] [rbp-10030h] BYREF
  __int64 v13; // [rsp-E000h] [rbp-F030h] BYREF

  do
    v12 = 0LL;
  while ( &v12 != (__int64 *)((char *)&v13 - (char *)&unk_10000) );
  result = std::io::Seek::rewind();
  if ( !result )
  {
    uu_shred::BytesWriter::from_pass_type(v11, a2);
    v7 = 0LL;
    while ( v7 < a4 >> 16 )
    {
      v7 = ((__int64 (__fastcall *)(unsigned __int64))<u64 as core::iter::range::Step>::forward_unchecked)(v7);
      v8 = uu_shred::BytesWriter::bytes_for_pass(v11, (__int64)&unk_10000);
      result = ((__int64 (__fastcall *)(__int64, __int64))std::io::Write::write_all)(a1, v8);
      if ( result )
        return result;
    }
    if ( !(_WORD)a4 )
      goto LABEL_11;
    v9 = (__int64)&unk_10000;
    if ( a3 )
      v9 = (unsigned __int16)a4;
    v10 = uu_shred::BytesWriter::bytes_for_pass(v11, v9);
    result = ((__int64 (__fastcall *)(__int64, __int64))std::io::Write::write_all)(a1, v10);
    if ( !result )
    {
LABEL_11:
      result = ((__int64 (__fastcall *)(__int64))std::fs::File::sync_data)(a1);
      if ( !result )
        return 0LL;
    }
  }
  return result;
}
