__int64 __fastcall uu_head::head_file(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r14
  __int64 n_lines; // rax
  __int64 v5; // r14
  __int64 v6; // r14
  _QWORD v7[9]; // [rsp+0h] [rbp-48h] BYREF

  switch ( *(_QWORD *)a2 )
  {
    case 0LL:
      v3 = *(_QWORD *)(a2 + 8);
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v7, &unk_10000, a1);
      n_lines = uu_head::read_n_lines((__int64)v7, v3, *(_BYTE *)(a2 + 43));
      goto LABEL_5;
    case 1LL:
    case 3LL:
      result = uu_head::head_backwards_file(a1, a2);
      break;
    case 2LL:
      v5 = *(_QWORD *)(a2 + 8);
      std::io::buffered::bufreader::BufReader<R>::with_capacity(v7, &unk_10000, a1);
      n_lines = uu_head::read_n_bytes(v7, v5);
LABEL_5:
      v6 = n_lines;
      core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut std::fs::File>>(v7[0], v7[1]);
      result = v6;
      break;
  }
  return result;
}
