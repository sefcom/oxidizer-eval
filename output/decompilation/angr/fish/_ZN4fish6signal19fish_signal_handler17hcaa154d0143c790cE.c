long long fish::signal::fish_signal_handler(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v4;  // rax
    char v5;  // cl

    v0 = v2;
    v3 = errno::errno();
    if (fish::signal::reraise_if_forked_child(a0))
        goto LABEL_1410362;
    if ((char)fish::event::is_signal_observed(a0))
    {
        fish::event::enqueue_signal(a0);
        switch (a0)
        {
        case 1:
LABEL_141034e:
            v4 = fish::topic_monitor::topic_monitor_principal();
            break;
        case 2:
            fish::reader::reader_handle_sigint();
        case 17:
            v4 = fish::topic_monitor::topic_monitor_principal();
            v5 = 1;
            break;
        case 28:
LABEL_141032f:
            fish::termsize::TermsizeContainer::invalidate_tty();
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27:
LABEL_1410362:
            return errno::set_errno(v3);
        default:
            goto LABEL_1410362;
        }
        v4.post(v5);
    }
    else
    {
        switch (a0)
        {
        case 1:
            fish::reader::reader_sighup();
            fish::tty_handoff::safe_mark_tty_invalid();
            goto LABEL_141034e;
        case 2:
            core::sync::atomic::atomic_store(&_ZN4fish6signal19CANCELLATION_SIGNAL17h32553cc68c890839E, 2);
        case 15:
            fish::reader::safe_restore_term_mode();
            fish::tty_handoff::safe_deactivate_tty_protocols();
            signal(15, NULL);
            raise(15);
            goto LABEL_1410362;
        case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 16: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27:
            goto LABEL_1410362;
        case 17:
            break;
        case 28:
            goto LABEL_141032f;
        default:
            goto LABEL_1410362;
        }
    }
}
