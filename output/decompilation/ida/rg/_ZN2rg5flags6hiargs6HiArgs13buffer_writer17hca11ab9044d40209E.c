__int64 __fastcall rg::flags::hiargs::HiArgs::buffer_writer(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  __int128 v6; // [rsp+0h] [rbp-98h] BYREF
  __int64 v7; // [rsp+10h] [rbp-88h]
  __int128 v8; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+30h] [rbp-68h]
  _OWORD v10[6]; // [rsp+38h] [rbp-60h] BYREF

  termcolor::BufferWriter::stdout(v10, 0x1000203u >> (8 * *(_BYTE *)(a2 + 917)));
  if ( __OFSUB__(0LL, *(_QWORD *)(a2 + 640)) )
  {
    *(_QWORD *)&v6 = 0x8000000000000000LL;
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v8, *(_QWORD *)(a2 + 648), *(_QWORD *)(a2 + 656));
    v7 = v9;
    v6 = v8;
  }
  result = ((__int64 (__fastcall *)(_OWORD *, __int128 *))termcolor::BufferWriter::separator)(v10, &v6);
  a1[4] = v10[4];
  v3 = v10[0];
  v4 = v10[1];
  v5 = v10[2];
  a1[3] = v10[3];
  a1[2] = v5;
  a1[1] = v4;
  *a1 = v3;
  return result;
}