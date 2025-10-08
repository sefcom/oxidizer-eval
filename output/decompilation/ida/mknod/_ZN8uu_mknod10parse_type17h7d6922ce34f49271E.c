__int64 __fastcall uu_mknod::parse_type(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 result; // rax
  int v6; // ecx
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  int v8; // [rsp+10h] [rbp-38h]
  __int64 v9; // [rsp+14h] [rbp-34h]
  int v10; // [rsp+1Ch] [rbp-2Ch]
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[0] = a2;
  v11[1] = a2 + a3;
  if ( (core::str::validations::next_code_point(v11) & 1) != 0 )
    return uu_mknod::parse_type::{{closure}}(a1, a2, a3, v4);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v7, aMissingDeviceT, 19LL);
  result = v7;
  v6 = v8;
  *(_DWORD *)(a1 + 20) = v10;
  *(_QWORD *)(a1 + 12) = v9;
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = v6;
  return result;
}