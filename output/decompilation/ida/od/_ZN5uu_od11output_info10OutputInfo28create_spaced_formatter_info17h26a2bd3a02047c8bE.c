__int64 __fastcall uu_od::output_info::OutputInfo::create_spaced_formatter_info(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = a4;
  v7 = a5;
  v8[0] = a2;
  v8[1] = a2 + 40 * a3;
  v8[2] = &v6;
  v8[3] = &v7;
  return core::iter::traits::iterator::Iterator::collect(a1, v8);
}