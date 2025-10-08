__int64 __fastcall alacritty::cli::parse_hex_or_decimal(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _BOOL8 v8; // rdi

  v4 = 2LL;
  v5 = <&str as core::str::pattern::Pattern>::strip_prefix_of(a0x_0, 2LL, a1, a2);
  if ( v5 )
  {
    v7 = core::num::<impl u32>::from_ascii_radix(v5, v6, 16LL);
    v4 = HIDWORD(v7);
    v8 = (v7 & 1) == 0;
  }
  else
  {
    v8 = 0LL;
  }
  return core::option::Option<T>::or_else(v8, v4, a1, a2);
}