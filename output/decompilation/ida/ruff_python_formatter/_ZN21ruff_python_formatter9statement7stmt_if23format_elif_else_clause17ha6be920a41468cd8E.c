__int64 __fastcall ruff_python_formatter::statement::stmt_if::format_elif_else_clause(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v18; // [rsp+8h] [rbp-120h] BYREF
  __int64 v19; // [rsp+10h] [rbp-118h] BYREF
  _DWORD v20[2]; // [rsp+18h] [rbp-110h] BYREF
  __int64 v21; // [rsp+20h] [rbp-108h]
  _QWORD *v22; // [rsp+28h] [rbp-100h]
  __int64 v23; // [rsp+30h] [rbp-F8h]
  __int64 v24; // [rsp+38h] [rbp-F0h]
  __int64 v25; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v26[2]; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-C8h]
  __int64 v29; // [rsp+68h] [rbp-C0h]
  __int64 v30; // [rsp+70h] [rbp-B8h]
  __int64 v31; // [rsp+78h] [rbp-B0h]
  __int64 v32; // [rsp+80h] [rbp-A8h]
  _QWORD *v33; // [rsp+88h] [rbp-A0h]
  void *v34; // [rsp+90h] [rbp-98h]
  __int64 v35; // [rsp+98h] [rbp-90h]
  __int64 v36; // [rsp+A0h] [rbp-88h]
  _QWORD v37[3]; // [rsp+A8h] [rbp-80h] BYREF
  char v38; // [rsp+C0h] [rbp-68h]
  _QWORD v39[12]; // [rsp+C8h] [rbp-60h] BYREF

  v24 = a5;
  v23 = a4;
  v21 = a1;
  v18 = a2;
  v25 = a2 + 24;
  v6 = *a3;
  v22 = a3;
  v7 = a3[1];
  v8 = (*(__int64 (__fastcall **)(__int64))(v7 + 48))(v6);
  alloc::rc::RcInnerPtr::inc_strong(*(_QWORD *)(v8 + 16));
  v19 = *(_QWORD *)(v8 + 16);
  v9 = ruff_python_formatter::comments::Comments::dangling(v19, a2);
  v11 = v10;
  v27 = 87LL;
  v28 = a2;
  v12 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading((_QWORD *)(v19 + 16));
  v26[0] = &v18;
  v26[1] = &v25;
  v27 = 6LL;
  v28 = a2;
  v29 = v12;
  v30 = v13;
  v31 = v23;
  v32 = v24;
  v33 = v26;
  v34 = &unk_57EE20;
  v35 = v9;
  v36 = v11;
  v37[0] = a2;
  v38 = a6;
  v37[1] = v9;
  v37[2] = v11;
  v14 = ruff_formatter::formatter::Formatter<Context>::options(v6, v7);
  v15 = 0;
  if ( *(_BYTE *)(v14 + 12) == 1 )
  {
    v20[1] = *(_DWORD *)(v18 + 108);
    v15 = 1;
  }
  v20[0] = v15;
  v39[0] = &v27;
  v39[1] = &unk_57E140;
  v39[2] = v37;
  v39[3] = &unk_57E160;
  v39[4] = v20;
  v39[5] = &unk_57E810;
  <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(v21, v22, v39, 3LL);
  return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v19);
}