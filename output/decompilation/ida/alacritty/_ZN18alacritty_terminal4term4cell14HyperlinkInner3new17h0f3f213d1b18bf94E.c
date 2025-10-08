__int64 __fastcall alacritty_terminal::term::cell::HyperlinkInner::new(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int128 v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+10h] [rbp-58h]
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  if ( __OFSUB__(0LL, *a2) )
  {
    v4 = core::fmt::num::imp::<impl u32>::_fmt(
           (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)&alacritty_terminal::term::cell::HYPERLINK_ID_SUFFIX,
                           1u),
           &v10,
           10LL);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v6, v4);
    v9 = v7;
    v8 = v6;
    <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v8);
    v11 = v9;
    v10 = v8;
  }
  else
  {
    v7 = a2[2];
    v6 = *(_OWORD *)a2;
    <T as alloc::string::ToString>::to_string(&v10, &v6);
    core::ptr::drop_in_place<alloc::string::String>(v6, *((_QWORD *)&v6 + 1));
  }
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = v10;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)a3;
  result = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 40) = result;
  return result;
}