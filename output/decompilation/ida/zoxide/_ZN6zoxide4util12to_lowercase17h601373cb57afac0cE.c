__int64 __fastcall zoxide::util::to_lowercase(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // r14

  v3 = <&T as core::convert::AsRef<U>>::as_ref(a2, a3);
  v5 = v4;
  if ( (unsigned __int8)core::slice::ascii::is_ascii(v3, v4) )
    return alloc::str::<impl str>::to_ascii_lowercase(a1, v3, v5);
  else
    return alloc::str::<impl str>::to_lowercase(a1, v3, v5);
}