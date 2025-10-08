__int64 __fastcall uu_head::head_file(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 n_lines; // rbx
  _QWORD v5[9]; // [rsp+0h] [rbp-48h] BYREF

  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      v3 = *(_QWORD *)(a2 + 8);
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v5, a1);
      n_lines = uu_head::read_n_lines((__int64)v5, v3, *(_BYTE *)(a2 + 43));
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut std::fs::File>>(v5[0], v5[1]);
      result = n_lines;
      break;
    case 1LL:
    case 3LL:
      result = uu_head::head_backwards_file(a1, a2);
      break;
    case 2LL:
      result = uu_head::read_n_bytes(a1, *(_QWORD *)(a2 + 8));
      break;
  }
  return result;
}