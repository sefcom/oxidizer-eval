__int64 __fastcall uu_sort::ext_sort::write_lines(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  _QWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[49]; // [rsp+1h] [rbp-31h] BYREF

  if ( a2 )
  {
    v10[0] = HIBYTE(result);
    v7 = a1;
    do
    {
      v8 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, *v7, v7[1]);
      core::result::Result<T,E>::unwrap(v8, &off_18C730);
      v10[0] = a4;
      v9 = <std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::write_all(a3, v10, 1LL);
      result = core::result::Result<T,E>::unwrap(v9, &off_18C748);
      v7 += 3;
    }
    while ( v7 != &a1[3 * a2] );
  }
  return result;
}