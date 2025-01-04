__int64 __fastcall uu_env::apply_ignore_signal(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int *v2; // rax
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 104) + 8LL * *(_QWORD *)(a1 + 112);
  v5[0] = *(_QWORD *)(a1 + 104);
  v5[1] = v1;
  while ( 1 )
  {
    v2 = (unsigned int *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v5);
    if ( !v2 )
      return 0LL;
    if ( (unsigned int)<nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from(*v2) )
      break;
    result = uu_env::ignore_signal((unsigned int)v3);
    if ( result )
      return result;
  }
  return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from((v3 << 32) | 2);
}
