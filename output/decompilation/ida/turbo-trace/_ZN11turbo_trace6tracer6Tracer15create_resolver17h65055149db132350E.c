__int64 __fastcall turbo_trace::tracer::Tracer::create_resolver(void *dest, __int64 a2, __int64 a3)
{
  _BYTE v5[392]; // [rsp+8h] [rbp-4C0h] BYREF
  _BYTE desta[390]; // [rsp+190h] [rbp-338h] BYREF
  char v7; // [rsp+316h] [rbp-1B2h]
  char v8; // [rsp+317h] [rbp-1B1h]
  _OWORD src[27]; // [rsp+318h] [rbp-1B0h] BYREF

  <oxc_resolver::options::ResolveOptions as core::default::Default>::default(src);
  BYTE5(src[24]) = 1;
  memcpy(desta, src, sizeof(desta));
  v7 = 2;
  v8 = BYTE7(src[24]);
  oxc_resolver::options::ResolveOptions::with_extension(src, desta);
  oxc_resolver::options::ResolveOptions::with_extension(desta, src);
  oxc_resolver::options::ResolveOptions::with_extension(src, desta);
  oxc_resolver::options::ResolveOptions::with_extension(desta, src);
  oxc_resolver::options::ResolveOptions::with_extension(src, desta);
  oxc_resolver::options::ResolveOptions::with_extension(desta, src);
  oxc_resolver::options::ResolveOptions::with_main_field(src, desta);
  oxc_resolver::options::ResolveOptions::with_main_field(desta, src);
  oxc_resolver::options::ResolveOptions::with_condition_names(v5, desta);
  if ( a2 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(src, a2, a3);
    *(_QWORD *)&desta[16] = *(_QWORD *)&src[1];
    *(_OWORD *)desta = src[0];
    core::ptr::drop_in_place<core::option::Option<oxc_resolver::options::TsconfigOptions>>(&v5[336]);
    *(_QWORD *)&v5[352] = *(_QWORD *)&desta[16];
    *(_OWORD *)&v5[336] = *(_OWORD *)desta;
    *(_QWORD *)&v5[360] = 0x8000000000000001LL;
  }
  memcpy(src, v5, 0x188uLL);
  return oxc_resolver::ResolverGeneric<C>::new(dest);
}