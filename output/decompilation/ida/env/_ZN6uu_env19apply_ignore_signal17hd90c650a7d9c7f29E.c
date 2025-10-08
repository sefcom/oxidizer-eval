__int64 __fastcall uu_env::apply_ignore_signal(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 i; // r12
  __int64 v5; // rdx
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 104);
  v2 = 8LL * *(_QWORD *)(a1 + 112);
  v3 = 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    if ( v2 == i )
      return v3;
    if ( (<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(*(unsigned int *)(v1 + i)) & 1) != 0 )
      break;
    v6 = uu_env::ignore_signal((unsigned int)v5);
    if ( v6 )
      return v6;
  }
  return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from((v5 << 32) | 2);
}