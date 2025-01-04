__int64 __fastcall uu_head::head_backwards_without_seek_file(__int64 a1, __int64 a2)
{
  __int64 but_last_n_lines; // rax
  __int64 v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]

  std::io::buffered::bufreader::BufReader<R>::with_capacity(&v5, &unk_10000, a1);
  if ( *(_QWORD *)a2 == 1LL )
  {
    but_last_n_lines = uu_head::read_but_last_n_lines((__int64)&v5, *(_QWORD *)(a2 + 8), *(unsigned __int8 *)(a2 + 43));
  }
  else
  {
    if ( (unsigned int)*(_QWORD *)a2 != 3 )
      core::panicking::panic(aInternalErrorE, 40LL, &off_12CEF0);
    but_last_n_lines = uu_head::read_but_last_n_bytes((__int64)&v5, *(_QWORD *)(a2 + 8));
  }
  if ( but_last_n_lines )
  {
    v3 = but_last_n_lines;
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&std::fs::File>>(v5, v6);
    return v3;
  }
  else
  {
    core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&std::fs::File>>(v5, v6);
    return 0LL;
  }
}
