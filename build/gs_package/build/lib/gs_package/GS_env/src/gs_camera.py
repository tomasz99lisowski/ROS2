import cv2
def gs_camera():
    stream = cv2.VideoCapture(0)
    if not stream.isOpened():
        print("Unable to open camera")
        return
    while True:
        ret, frame = stream.read()
        if not ret:
            break
        cv2.imshow("GS Camera Stream", frame)
        if cv2.waitKey(1) == ord("q"):
            break
    stream.release()
    cv2.destroyAllWindows()