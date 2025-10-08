// positive sp value has been detected, the output may be wrong!
__int64 __fastcall uu_shred::do_pass(__int64 a1, _BYTE *a2, char a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  char v10[336]; // [rsp-F150h] [rbp-10178h] BYREF
  __int64 v11; // [rsp-F000h] [rbp-10028h] BYREF
  __int64 v12; // [rsp-E000h] [rbp-F028h] BYREF

  do
    v11 = 0LL;
  while ( &v11 != (__int64 *)((char *)&v12 - (char *)&unk_10000) );
  result = std::io::Seek::rewind();
  if ( !result )
  {
    uu_shred::BytesWriter::from_pass_type(v10, a2);
    if ( !a3 )
      a4 = (a4 + ((unsigned __int8)((a4 & 0xFFF) != 0) << 12)) & 0xFFFFFFFFFFFFF000LL;
    v7 = (a4 >> 16) + 1;
    while ( --v7 )
    {
      v8 = uu_shred::BytesWriter::bytes_for_pass(v10, (__int64)&unk_10000);
      result = ((__int64 (__fastcall *)(__int64, __int64))std::io::Write::write_all)(a1, v8);
      if ( result )
        return result;
    }
    v9 = uu_shred::BytesWriter::bytes_for_pass(v10, (unsigned __int16)a4);
    result = ((__int64 (__fastcall *)(__int64, __int64))std::io::Write::write_all)(a1, v9);
    if ( !result )
      return ((__int64 (__fastcall *)(__int64))std::fs::File::sync_data)(a1);
  }
  return result;
}