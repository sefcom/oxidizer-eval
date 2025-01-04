__int64 __fastcall uu_head::head_backwards_file(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // r12
  char is_seekable; // al
  unsigned __int64 v6; // rcx
  int v7; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v9; // [rsp+58h] [rbp-80h]
  unsigned __int64 v10; // [rsp+60h] [rbp-78h]

  std::fs::File::metadata(&v7, a1);
  if ( v7 == 2 )
    return v8;
  v3 = v9;
  v4 = v10;
  is_seekable = uu_head::is_seekable(a1);
  v6 = 512LL;
  if ( v4 < 0x20000001 )
    v6 = v4;
  if ( !v4 )
    v6 = 512LL;
  if ( is_seekable && v3 > v6 )
    return uu_head::head_backwards_on_seekable_file(a1, a2, 512LL);
  else
    return uu_head::head_backwards_without_seek_file(a1, a2, 512LL, v6);
}
