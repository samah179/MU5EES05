# Create the folder to store the images
mkdir -p ~/Desktop/MU5EES05/partie_2/lab6/xkcd_images

# Loop through the first 10 pages
for i in $(seq 1 10); do
  PAGE="https://xkcd.com/$i/"
  echo "Downloading page $i: $PAGE"

  # Retrieve the image URL via the og:image attribute
  IMG_URL=$(curl -s "$PAGE" | grep 'og:image' | grep -o 'https://[^"]*\.jpg')

  # Check if an URL was found
  if [ -n "$IMG_URL" ]; then
    wget -q -O ~/Desktop/MU5EES05/partie_2/lab6/xkcd_images/image_$i.jpg "$IMG_URL"
    echo "  -> Image saved: image_$i.jpg"
  else
    echo "  -> No image found on page $i"
  fi
done

# Display all downloaded images
eog ~/Desktop/MU5EES05/partie_2/lab6/xkcd_images/*.jpg