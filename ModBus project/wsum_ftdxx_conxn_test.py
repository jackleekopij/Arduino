import usb.core
import usb.backend.libusb1
backend_local = usb.backend.libusb1.get_backend(find_library = "/opt/homebrew/Cellar/libusb/1.0.26/lib/libusb-1.0.dylib")


dev = usb.core.find(backend = backend_local)
print(dev)