__int64 __fastcall uu_head::head_backwards_file(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  bool is_seekable; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  int v8; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-80h]
  unsigned __int64 v10; // [rsp+60h] [rbp-78h]

  std::fs::File::metadata(&v8, a1);
  if ( v8 == 2 )
    return 1LL;
  v3 = v9;
  v4 = v10;
  is_seekable = uu_head::is_seekable(a1);
  v7 = 512LL;
  if ( v4 - 1 < 0x20000000 )
    v7 = v4;
  if ( is_seekable && v3 > v7 )
    return uu_head::head_backwards_on_seekable_file(a1, a2);
  else
    return uu_head::head_backwards_without_seek_file(a1, a2, v6, v7);
}