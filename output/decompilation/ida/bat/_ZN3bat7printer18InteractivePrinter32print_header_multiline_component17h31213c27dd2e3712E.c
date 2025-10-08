__int64 __fastcall bat::printer::InteractivePrinter::print_header_multiline_component(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r12
  _OWORD *v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int64 v23; // [rsp+10h] [rbp-168h]
  _OWORD *v24; // [rsp+20h] [rbp-158h]
  __int64 v25; // [rsp+28h] [rbp-150h]
  __int128 v26; // [rsp+30h] [rbp-148h] BYREF
  __int64 v27; // [rsp+40h] [rbp-138h]
  __int128 v28; // [rsp+50h] [rbp-128h] BYREF
  __int64 v29; // [rsp+60h] [rbp-118h]
  __int128 v30; // [rsp+68h] [rbp-110h] BYREF
  __int128 v31; // [rsp+78h] [rbp-100h]
  __int128 v32; // [rsp+88h] [rbp-F0h]
  __int128 v33; // [rsp+98h] [rbp-E0h]
  __int128 v34; // [rsp+A8h] [rbp-D0h]
  char v35; // [rsp+B8h] [rbp-C0h]
  __int64 v36; // [rsp+C0h] [rbp-B8h]
  __int64 v37; // [rsp+D0h] [rbp-A8h]
  __int64 v38; // [rsp+E0h] [rbp-98h]
  __int64 v39; // [rsp+F0h] [rbp-88h]
  __int64 v40; // [rsp+F8h] [rbp-80h]
  __int64 v41; // [rsp+100h] [rbp-78h]
  char v42; // [rsp+108h] [rbp-70h]
  int v43; // [rsp+10Ch] [rbp-6Ch]
  char v44; // [rsp+110h] [rbp-68h]
  __int64 v45; // [rsp+118h] [rbp-60h]
  __int64 v46; // [rsp+120h] [rbp-58h]
  _QWORD v47[10]; // [rsp+128h] [rbp-50h] BYREF

  v9 = *(_QWORD *)(a2 + 512);
  v10 = *(_QWORD *)(v9 + 256);
  v11 = v10 - bat::printer::InteractivePrinter::get_header_component_indent_length(v9, *(_QWORD *)(a2 + 528));
  if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::count(a4, a4 + a5) <= v11 )
    return bat::printer::InteractivePrinter::print_header_component_with_indent(a1, a2, a3, a4, a5);
  v25 = a3;
  v24 = a1;
  v45 = a4;
  v46 = a5;
  *(_QWORD *)&v30 = 0LL;
  *(_QWORD *)&v31 = 0LL;
  *(_QWORD *)&v32 = 0LL;
  *(_QWORD *)&v33 = 0LL;
  *((_QWORD *)&v33 + 1) = a5;
  *(_QWORD *)&v34 = 0LL;
  BYTE8(v34) = 2;
  HIDWORD(v34) = 268566529;
  v35 = 16;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = a5;
  v40 = a5;
  v41 = 0LL;
  v42 = 2;
  v43 = 268566529;
  v44 = 16;
  core::iter::traits::iterator::Iterator::collect(&v22, &v30);
  v12 = v23;
  if ( v23 <= v11 )
  {
LABEL_5:
    v16 = *((_QWORD *)&v22 + 1);
    alloc::str::join_generic_copy(&v30, *((_QWORD *)&v22 + 1), v12, 1LL, 0LL);
    v27 = v31;
    v26 = v30;
    bat::printer::InteractivePrinter::print_header_component_with_indent(v24, a2, v25, *((__int64 *)&v30 + 1), v31);
    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v22, v16);
    return core::ptr::drop_in_place<alloc::string::String>(&v26);
  }
  else
  {
    while ( 1 )
    {
      v13 = *((_QWORD *)&v22 + 1);
      core::slice::<impl [T]>::split_at_unchecked(v47, *((_QWORD *)&v22 + 1), v12, v11);
      v14 = v47[2];
      v15 = v47[3];
      alloc::str::join_generic_copy(&v26, v47[0], v47[1], 1LL, 0LL);
      v29 = v27;
      v28 = v26;
      bat::printer::InteractivePrinter::print_header_component_with_indent(&v30, a2, v25, *((__int64 *)&v26 + 1), v27);
      if ( (_BYTE)v30 != 13 )
        break;
      core::ptr::drop_in_place<alloc::string::String>(&v28);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v30, v14, v15);
      core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v22, v13);
      v12 = v31;
      v23 = v31;
      v22 = v30;
      if ( (unsigned __int64)v31 <= v11 )
        goto LABEL_5;
    }
    v18 = v24;
    v24[4] = v34;
    v19 = v30;
    v20 = v31;
    v21 = v32;
    v18[3] = v33;
    v18[2] = v21;
    v18[1] = v20;
    *v18 = v19;
    core::ptr::drop_in_place<alloc::string::String>(&v28);
    return core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&alloc::string::String)>>(v22, v13);
  }
}