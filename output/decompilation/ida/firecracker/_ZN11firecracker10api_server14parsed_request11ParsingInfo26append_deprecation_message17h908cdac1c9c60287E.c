__int64 __fastcall firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // [rsp+0h] [rbp-20h] BYREF
  __int64 v5; // [rsp+10h] [rbp-10h]

  if ( !__OFSUB__(0LL, *a1) )
    return <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
             a1,
             a2,
             a2 + a3);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v4);
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(a1);
  result = v5;
  a1[2] = v5;
  *(_OWORD *)a1 = v4;
  return result;
}