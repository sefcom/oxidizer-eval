__int64 __fastcall forc_debug::cli::commands::parse_int(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rbx
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+18h] [rbp-30h]
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+30h] [rbp-18h]

  v2 = <&str as core::str::pattern::Pattern>::strip_prefix_of(a0x_3, a1, a2);
  v7 = a1;
  v8 = a2;
  LODWORD(v9) = 10;
  core::option::Option<T>::map_or(v10, v2, v3, &v7);
  v4 = v11;
  alloc::str::<impl str>::replace(&v7, v10[0], v10[1]);
  core::num::<impl usize>::from_ascii_radix(v10, v8, v9, v4);
  v5 = LOBYTE(v10[0]) ^ 1LL;
  core::ptr::drop_in_place<alloc::string::String>(&v7);
  return v5;
}