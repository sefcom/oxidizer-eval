__int64 __fastcall ruff_python_formatter::string::docstring::CodeExample::finish(__int128 *a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int128 v4; // xmm2
  __int128 v6; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v7; // [rsp+10h] [rbp-98h]
  __int128 v8; // [rsp+20h] [rbp-88h]
  __int128 v9; // [rsp+30h] [rbp-78h]
  __int128 v10; // [rsp+40h] [rbp-68h]
  _OWORD v11[5]; // [rsp+50h] [rbp-58h] BYREF

  v10 = a1[4];
  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v9 = a1[3];
  v8 = v4;
  v7 = v3;
  v6 = v2;
  *(_QWORD *)a1 = 0x8000000000000003LL;
  if ( (_QWORD)v6 == 0x8000000000000003LL )
    return core::ptr::drop_in_place<core::option::Option<ruff_python_formatter::string::docstring::CodeExampleKind>>(&v6);
  v11[4] = v10;
  v11[3] = v9;
  v11[2] = v8;
  v11[1] = v7;
  v11[0] = v6;
  return alloc::collections::vec_deque::VecDeque<T,A>::push_back(a2, v11, &off_57F1A0);
}