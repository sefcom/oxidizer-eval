__int64 __fastcall uu_split::custom_write(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r15
  char v7; // cl
  __int64 result; // rax
  __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write(a3, a1, a2) & 1) == 0 )
    return 0LL;
  v6 = v5;
  v7 = uu_split::ignorable_io_error(v5, a4);
  result = 1LL;
  if ( v7 )
  {
    v9[0] = v6;
    core::ptr::drop_in_place<std::io::error::Error>(v9);
    return 0LL;
  }
  return result;
}