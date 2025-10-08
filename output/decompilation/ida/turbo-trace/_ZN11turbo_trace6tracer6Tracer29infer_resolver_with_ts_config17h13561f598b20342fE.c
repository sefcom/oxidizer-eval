__int64 __fastcall turbo_trace::tracer::Tracer::infer_resolver_with_ts_config(
        _QWORD *dest,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 result; // rax
  __int64 v12; // r12
  __int128 v13; // [rsp+0h] [rbp-4F8h] BYREF
  __int64 v14; // [rsp+10h] [rbp-4E8h]
  _BYTE v15[24]; // [rsp+18h] [rbp-4E0h] BYREF
  _BYTE src[392]; // [rsp+30h] [rbp-4C8h] BYREF
  _BYTE desta[392]; // [rsp+1B8h] [rbp-340h] BYREF
  _QWORD v18[55]; // [rsp+340h] [rbp-1B8h] BYREF

  *(_QWORD *)desta = a2;
  *(_QWORD *)&desta[8] = a3;
  *(_QWORD *)&desta[16] = 1LL;
  v6 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(desta);
  v8 = v7;
  *(_QWORD *)desta = a2;
  *(_QWORD *)&desta[8] = a3;
  *(_QWORD *)&desta[16] = 1LL;
  v10 = <core::iter::adapters::skip::Skip<I> as core::iter::traits::iterator::Iterator>::try_fold(desta);
  if ( v10 | v6 )
  {
    v12 = v9;
    <oxc_resolver::options::ResolveOptions as core::clone::Clone>::clone(src, a4);
    if ( v6 )
    {
      turbopath::absolute_system_path::AbsoluteSystemPath::join_component(v18, v6, v8, aTsconfigJson, 13LL);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(desta, v18[1], v18[2]);
      v14 = *(_QWORD *)&desta[16];
      v13 = *(_OWORD *)desta;
      core::ptr::drop_in_place<core::option::Option<oxc_resolver::options::TsconfigOptions>>(&src[336]);
      *(_QWORD *)&src[352] = v14;
      *(_OWORD *)&src[336] = v13;
      *(_QWORD *)&src[360] = 0x8000000000000001LL;
      core::ptr::drop_in_place<turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf>(v18);
    }
    if ( v10 )
    {
      memcpy(desta, src, sizeof(desta));
      turbopath::absolute_system_path::AbsoluteSystemPath::join_component(&v13, v10, v12, aNodeModules, 12LL);
      <T as alloc::string::SpecToString>::spec_to_string(v15, &v13);
      oxc_resolver::options::ResolveOptions::with_module(v18, desta);
      memcpy(src, v18, sizeof(src));
      core::ptr::drop_in_place<turbopath::absolute_system_path_buf::AbsoluteSystemPathBuf>(&v13);
    }
    memcpy(desta, src, sizeof(desta));
    return oxc_resolver::ResolverGeneric<C>::clone_with_options(dest);
  }
  else
  {
    result = 0x8000000000000000LL;
    *dest = 0x8000000000000000LL;
  }
  return result;
}