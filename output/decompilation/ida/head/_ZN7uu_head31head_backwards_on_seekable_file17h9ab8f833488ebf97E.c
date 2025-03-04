__int64 __fastcall uu_head::head_backwards_on_seekable_file(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r15
  __int64 n_bytes; // rbx
  _BOOL8 nth_line_from_end; // rax
  __int64 v5; // rdx
  __int64 v7; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v9; // [rsp+50h] [rbp-78h]

  if ( *(_QWORD *)a2 == 1LL )
  {
    nth_line_from_end = uu_head::find_nth_line_from_end(a1, *(_QWORD *)(a2 + 8), *(_BYTE *)(a2 + 43));
    n_bytes = v5;
    if ( nth_line_from_end )
      return n_bytes;
LABEL_8:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(&v7, &unk_10000, a1);
    n_bytes = uu_head::read_n_bytes();
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut std::fs::File>>(v7, v8);
    return n_bytes;
  }
  if ( (unsigned int)*(_QWORD *)a2 != 3 )
    core::panicking::panic(aInternalErrorE, 40LL, &off_12CF08);
  v2 = *(_QWORD *)(a2 + 8);
  std::fs::File::metadata(&v7, a1);
  if ( (_DWORD)v7 != 2 )
  {
    if ( v9 <= v2 )
      return 0LL;
    goto LABEL_8;
  }
  return v8;
}
