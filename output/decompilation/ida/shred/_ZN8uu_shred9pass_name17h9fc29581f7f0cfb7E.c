__int64 __fastcall uu_shred::pass_name(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned __int8 *v8; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int8 **v9; // [rsp+8h] [rbp-70h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+10h] [rbp-68h]
  unsigned __int8 **v11; // [rsp+18h] [rbp-60h]
  __int64 (__fastcall *v12)(); // [rsp+20h] [rbp-58h]
  unsigned __int8 **v13; // [rsp+28h] [rbp-50h]
  __int64 (__fastcall *v14)(); // [rsp+30h] [rbp-48h]
  unsigned __int8 *v15; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int8 *v16; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 **v17; // [rsp+48h] [rbp-30h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+50h] [rbp-28h]
  unsigned __int8 ***v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h]
  void *v21; // [rsp+68h] [rbp-10h]
  __int64 v22; // [rsp+70h] [rbp-8h]

  v6 = *a2;
  if ( (_BYTE)v6 == 2 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, aRandom, 6LL);
  if ( (v6 & 1) != 0 )
  {
    v15 = a2 + 1;
    v16 = a2 + 2;
    v8 = a2 + 3;
    v9 = &v15;
    v10 = <&T as core::fmt::LowerHex>::fmt;
    v11 = &v16;
    v12 = <&T as core::fmt::LowerHex>::fmt;
    v13 = &v8;
    v14 = <&T as core::fmt::LowerHex>::fmt;
    v17 = (unsigned __int8 **)&unk_1AA58;
    v18 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v21 = &unk_1AB18;
    v22 = 3LL;
    v19 = &v9;
    v20 = 3LL;
    return ((__int64 (__fastcall *)(__int64, unsigned __int8 ***, __int64, unsigned __int8 **, __int64, __int64))core::option::Option<T>::map_or_else)(
             a1,
             &v17,
             a3,
             &v8,
             a5,
             a6);
  }
  else
  {
    v17 = &v8;
    v18 = <&T as core::fmt::LowerHex>::fmt;
    v9 = (unsigned __int8 **)&unk_1AA58;
    v10 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v13 = (unsigned __int8 **)&unk_1AA88;
    v14 = (__int64 (__fastcall *)())(&dword_0 + 3);
    v11 = (unsigned __int8 **)&v17;
    v12 = (__int64 (__fastcall *)())(&dword_0 + 1);
    return ((__int64 (__fastcall *)(__int64, unsigned __int8 ***, __int64, __int64, __int64, __int64, unsigned __int8 *))core::option::Option<T>::map_or_else)(
             a1,
             &v9,
             a3,
             v6,
             a5,
             a6,
             a2 + 1);
  }
}