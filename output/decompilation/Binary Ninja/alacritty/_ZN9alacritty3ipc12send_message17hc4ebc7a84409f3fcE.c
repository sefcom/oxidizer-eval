
  char const (**)[0xae] alacritty::ipc::send_message::hc4ebc7a84409f3fc(int64_t* arg1, int64_t* arg2)

{
    int32_t var_48;
    alacritty::ipc::find_socket::h2033fc8b055af1f5(&var_48, arg1);
    char const (** result)[0xae];
    char const (** result_1)[0xae];
    
    if (var_48 != 1)
    {
        int32_t fd_1;
        int32_t fd = fd_1;
        serde_json::ser::to_vec::h3eec6d2f42eaa2d7(&var_48, arg2);
        int64_t rax_1 = var_48;
        int64_t* result_5 = result_1;
        
        if (-(rax_1) != -0x8000000000000000)
        {
            int64_t var_30 = rax_1;
            int64_t* result_6 = result_5;
            uint64_t var_38;
            uint64_t var_20_1 = var_38;
            char const (** result_2)[0xae] =
                std::io::Write::write_all::h7d16bb30299e266c(&fd, result_5, var_38);
            result = result_2;
            
            if (result_2)
            {
                label_85c0d9:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_30);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb4e0882300dc626a(fd);
            }
            else
            {
                var_48 = 0;
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h1de10a50e8d7f33d(&var_48);
                char const (** result_3)[0xae] =
                    std::os::unix::net::stream::UnixStream::shutdown::hb2aa252500a1ff7c(&fd, 1);
                result = result_3;
                
                if (result_3)
                    goto label_85c0d9;
                
                char const (** result_4)[0xae] =
                    alacritty::ipc::handle_reply::h596fdf307eae2b15(&fd, *arg2);
                result = result_4;
                
                if (result_4)
                    goto label_85c0d9;
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_30);
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hb4e0882300dc626a(fd);
                result = nullptr;
            }
        }
        else
        {
            result = serde_json::error::_$LT$impl$u20$core..convert..From$LT$serde_json..error..Error$GT$$u20$for$u20$std..io..error..Error$GT$::from::hdd0ec4fde4609ada(result_5);
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hb4e0882300dc626a(fd_1);
        }
    }
    else
        result = result_1;
    core::ptr::drop_in_place$LT$alacritty..cli..SocketMessage$GT$::hefa041a5d6384faf(arg2);
    return result;
}
