__int64 __fastcall alacritty::cli::WindowIdentity::override_identity_config(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !__OFSUB__(0LL, *a1) )
    result = <alloc::string::String as core::clone::Clone>::clone_from(a2, a1);
  if ( a1[3] != 0x8000000000000000LL )
    return core::clone::Clone::clone_from(a2 + 24, a1 + 3);
  return result;
}