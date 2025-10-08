_QWORD *__fastcall forc_crypto::args::read_content_filepath_or_stdin(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax
  char v3; // dl
  __int128 v4; // xmm0
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+18h] [rbp-30h]
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  forc_crypto::args::checked_read_file(&v7, a2);
  if ( !__OFSUB__(0LL, (_QWORD)v7) )
  {
    a1[2] = v8;
    v4 = v7;
LABEL_6:
    *(_OWORD *)a1 = v4;
    goto LABEL_7;
  }
  v6 = std::io::stdio::stdin();
  v2 = std::io::stdio::Stdin::lock(&v6);
  forc_crypto::args::checked_read_stdin(&v9, a2, v2, v3 & 1);
  if ( (_QWORD)v9 != 0x8000000000000000LL )
  {
    a1[2] = v10;
    v4 = v9;
    goto LABEL_6;
  }
  forc_crypto::args::read_as_binary(a1, a2);
LABEL_7:
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(a2);
  return a1;
}