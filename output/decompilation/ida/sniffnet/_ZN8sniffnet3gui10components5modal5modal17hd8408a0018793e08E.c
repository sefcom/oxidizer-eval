__int64 __fastcall sniffnet::gui::components::modal::modal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE v8[88]; // [rsp+8h] [rbp-1410h] BYREF
  _QWORD v9[310]; // [rsp+60h] [rbp-13B8h] BYREF
  char v10; // [rsp+A10h] [rbp-A08h]
  _QWORD v11[319]; // [rsp+A20h] [rbp-9F8h] BYREF

  v9[113] = 0LL;
  v5 = iced_widget::helpers::opaque(a3);
  iced_widget::container::Container<Message,Theme,Renderer>::new(v9, v5, &off_2DF4548);
  iced_widget::container::Container<Message,Theme,Renderer>::center(v11, v9);
  iced_widget::container::Container<Message,Theme,Renderer>::class(v8, v11, 13LL);
  v9[4] = alloc::boxed::Box<T>::new(v8);
  v9[5] = &off_2DF4AA8;
  v9[39] = 0x800000000000003ALL;
  v9[77] = 0x800000000000003ALL;
  v9[115] = 0x800000000000003ALL;
  v9[153] = 0x800000000000003ALL;
  v9[191] = 0x800000000000003ALL;
  v9[229] = 0x800000000000003ALL;
  v9[0] = 0LL;
  v9[267] = 0x800000000000003ALL;
  v9[2] = 0LL;
  v9[305] = 0x800000000000003ALL;
  v10 = 19;
  iced_widget::mouse_area::MouseArea<Message,Theme,Renderer>::on_press(v11, v9, a4);
  v6 = iced_widget::helpers::opaque(v11);
  v11[0] = a1;
  v11[1] = a2;
  v11[2] = v6;
  v11[3] = &off_2DF4548;
  iced_widget::stack::Stack<Message,Theme,Renderer>::with_children(v9, v11);
  return alloc::boxed::Box<T>::new(v9);
}