__int64 __fastcall bat::vscreen::join(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h]
  _BYTE v6[8]; // [rsp+18h] [rbp-20h] BYREF
  __int64 v7; // [rsp+20h] [rbp-18h]
  __int64 v8; // [rsp+28h] [rbp-10h]

  *(_QWORD *)&v4 = a3;
  *((_QWORD *)&v4 + 1) = &unk_6CED18;
  v5 = a2;
  core::iter::traits::iterator::Iterator::collect(v6, &v4);
  alloc::str::join_generic_copy(&v4, v7, v8, asc_1A2FEA);
  *(_QWORD *)(a1 + 16) = v5;
  *(_OWORD *)a1 = v4;
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v6);
}